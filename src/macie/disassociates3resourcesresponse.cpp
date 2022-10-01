// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociates3resourcesresponse.h"
#include "disassociates3resourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie {

/*!
 * \class QtAws::Macie::DisassociateS3ResourcesResponse
 * \brief The DisassociateS3ResourcesResponse class provides an interace for Macie DisassociateS3Resources responses.
 *
 * \inmodule QtAwsMacie
 *
 *  <fullname>Amazon Macie Classic</fullname>
 * 
 *  Amazon Macie Classic has been discontinued and is no longer
 * 
 *  available>
 * 
 *  A new Amazon Macie is now available with significant design improvements and additional features, at a lower price and
 *  in most Amazon Web Services Regions. We encourage you to take advantage of the new and improved features, and benefit
 *  from the reduced cost. To learn about features and pricing for the new Macie, see <a
 *  href="http://aws.amazon.com/macie/">Amazon Macie</a>. To learn how to use the new Macie, see the <a
 *  href="https://docs.aws.amazon.com/macie/latest/user/what-is-macie.html">Amazon Macie User
 *
 * \sa MacieClient::disassociateS3Resources
 */

/*!
 * Constructs a DisassociateS3ResourcesResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateS3ResourcesResponse::DisassociateS3ResourcesResponse(
        const DisassociateS3ResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MacieResponse(new DisassociateS3ResourcesResponsePrivate(this), parent)
{
    setRequest(new DisassociateS3ResourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateS3ResourcesRequest * DisassociateS3ResourcesResponse::request() const
{
    Q_D(const DisassociateS3ResourcesResponse);
    return static_cast<const DisassociateS3ResourcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie DisassociateS3Resources \a response.
 */
void DisassociateS3ResourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateS3ResourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie::DisassociateS3ResourcesResponsePrivate
 * \brief The DisassociateS3ResourcesResponsePrivate class provides private implementation for DisassociateS3ResourcesResponse.
 * \internal
 *
 * \inmodule QtAwsMacie
 */

/*!
 * Constructs a DisassociateS3ResourcesResponsePrivate object with public implementation \a q.
 */
DisassociateS3ResourcesResponsePrivate::DisassociateS3ResourcesResponsePrivate(
    DisassociateS3ResourcesResponse * const q) : MacieResponsePrivate(q)
{

}

/*!
 * Parses a Macie DisassociateS3Resources response element from \a xml.
 */
void DisassociateS3ResourcesResponsePrivate::parseDisassociateS3ResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateS3ResourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie
} // namespace QtAws
