// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdedicatedippoolsresponse.h"
#include "listdedicatedippoolsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::ListDedicatedIpPoolsResponse
 * \brief The ListDedicatedIpPoolsResponse class provides an interace for SESv2 ListDedicatedIpPools responses.
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
 * \sa SESv2Client::listDedicatedIpPools
 */

/*!
 * Constructs a ListDedicatedIpPoolsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDedicatedIpPoolsResponse::ListDedicatedIpPoolsResponse(
        const ListDedicatedIpPoolsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new ListDedicatedIpPoolsResponsePrivate(this), parent)
{
    setRequest(new ListDedicatedIpPoolsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDedicatedIpPoolsRequest * ListDedicatedIpPoolsResponse::request() const
{
    Q_D(const ListDedicatedIpPoolsResponse);
    return static_cast<const ListDedicatedIpPoolsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 ListDedicatedIpPools \a response.
 */
void ListDedicatedIpPoolsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDedicatedIpPoolsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::ListDedicatedIpPoolsResponsePrivate
 * \brief The ListDedicatedIpPoolsResponsePrivate class provides private implementation for ListDedicatedIpPoolsResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a ListDedicatedIpPoolsResponsePrivate object with public implementation \a q.
 */
ListDedicatedIpPoolsResponsePrivate::ListDedicatedIpPoolsResponsePrivate(
    ListDedicatedIpPoolsResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 ListDedicatedIpPools response element from \a xml.
 */
void ListDedicatedIpPoolsResponsePrivate::parseListDedicatedIpPoolsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDedicatedIpPoolsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
