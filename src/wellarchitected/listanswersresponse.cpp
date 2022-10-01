// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listanswersresponse.h"
#include "listanswersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::ListAnswersResponse
 * \brief The ListAnswersResponse class provides an interace for WellArchitected ListAnswers responses.
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
 * \sa WellArchitectedClient::listAnswers
 */

/*!
 * Constructs a ListAnswersResponse object for \a reply to \a request, with parent \a parent.
 */
ListAnswersResponse::ListAnswersResponse(
        const ListAnswersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new ListAnswersResponsePrivate(this), parent)
{
    setRequest(new ListAnswersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAnswersRequest * ListAnswersResponse::request() const
{
    Q_D(const ListAnswersResponse);
    return static_cast<const ListAnswersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WellArchitected ListAnswers \a response.
 */
void ListAnswersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAnswersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::ListAnswersResponsePrivate
 * \brief The ListAnswersResponsePrivate class provides private implementation for ListAnswersResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a ListAnswersResponsePrivate object with public implementation \a q.
 */
ListAnswersResponsePrivate::ListAnswersResponsePrivate(
    ListAnswersResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected ListAnswers response element from \a xml.
 */
void ListAnswersResponsePrivate::parseListAnswersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAnswersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws
