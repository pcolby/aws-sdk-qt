// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getanswerresponse.h"
#include "getanswerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::GetAnswerResponse
 * \brief The GetAnswerResponse class provides an interace for WellArchitected GetAnswer responses.
 *
 * \inmodule QtAwsWellArchitected
 *
 *  <fullname>Well-Architected Tool</fullname>
 * 
 *  This is the <i>Well-Architected Tool API Reference</i>. The WA Tool API provides programmatic access to the <a
 *  href="http://aws.amazon.com/well-architected-tool">Well-Architected Tool</a> in the <a
 *  href="https://console.aws.amazon.com/wellarchitected">Amazon Web Services Management Console</a>. For information about
 *  the Well-Architected Tool, see the <a
 *  href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/intro.html">Well-Architected Tool User
 *
 * \sa WellArchitectedClient::getAnswer
 */

/*!
 * Constructs a GetAnswerResponse object for \a reply to \a request, with parent \a parent.
 */
GetAnswerResponse::GetAnswerResponse(
        const GetAnswerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new GetAnswerResponsePrivate(this), parent)
{
    setRequest(new GetAnswerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAnswerRequest * GetAnswerResponse::request() const
{
    Q_D(const GetAnswerResponse);
    return static_cast<const GetAnswerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WellArchitected GetAnswer \a response.
 */
void GetAnswerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAnswerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::GetAnswerResponsePrivate
 * \brief The GetAnswerResponsePrivate class provides private implementation for GetAnswerResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a GetAnswerResponsePrivate object with public implementation \a q.
 */
GetAnswerResponsePrivate::GetAnswerResponsePrivate(
    GetAnswerResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected GetAnswer response element from \a xml.
 */
void GetAnswerResponsePrivate::parseGetAnswerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAnswerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws
