// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletededicatedippoolresponse.h"
#include "deletededicatedippoolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::DeleteDedicatedIpPoolResponse
 * \brief The DeleteDedicatedIpPoolResponse class provides an interace for SESv2 DeleteDedicatedIpPool responses.
 *
 * \inmodule QtAwsSESv2
 *
 *  <fullname>Amazon SES API v2</fullname>
 * 
 *  <a href="http://aws.amazon.com/ses">Amazon SES</a> is an Amazon Web Services service that you can use to send email
 *  messages to your
 * 
 *  customers>
 * 
 *  If you're new to Amazon SES API v2, you might find it helpful to review the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/">Amazon Simple Email Service Developer Guide</a>. The
 *  <i>Amazon SES Developer Guide</i> provides information and code samples that demonstrate how to use Amazon SES API v2
 *  features
 *
 * \sa SESv2Client::deleteDedicatedIpPool
 */

/*!
 * Constructs a DeleteDedicatedIpPoolResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDedicatedIpPoolResponse::DeleteDedicatedIpPoolResponse(
        const DeleteDedicatedIpPoolRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new DeleteDedicatedIpPoolResponsePrivate(this), parent)
{
    setRequest(new DeleteDedicatedIpPoolRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDedicatedIpPoolRequest * DeleteDedicatedIpPoolResponse::request() const
{
    Q_D(const DeleteDedicatedIpPoolResponse);
    return static_cast<const DeleteDedicatedIpPoolRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 DeleteDedicatedIpPool \a response.
 */
void DeleteDedicatedIpPoolResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDedicatedIpPoolResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::DeleteDedicatedIpPoolResponsePrivate
 * \brief The DeleteDedicatedIpPoolResponsePrivate class provides private implementation for DeleteDedicatedIpPoolResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a DeleteDedicatedIpPoolResponsePrivate object with public implementation \a q.
 */
DeleteDedicatedIpPoolResponsePrivate::DeleteDedicatedIpPoolResponsePrivate(
    DeleteDedicatedIpPoolResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 DeleteDedicatedIpPool response element from \a xml.
 */
void DeleteDedicatedIpPoolResponsePrivate::parseDeleteDedicatedIpPoolResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDedicatedIpPoolResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
