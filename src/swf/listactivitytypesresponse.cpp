// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listactivitytypesresponse.h"
#include "listactivitytypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::ListActivityTypesResponse
 * \brief The ListActivityTypesResponse class provides an interace for Swf ListActivityTypes responses.
 *
 * \inmodule QtAwsSwf
 *
 *  <fullname>Amazon Simple Workflow Service</fullname>
 * 
 *  The Amazon Simple Workflow Service (Amazon SWF) makes it easy to build applications that use Amazon's cloud to
 *  coordinate work across distributed components. In Amazon SWF, a <i>task</i> represents a logical unit of work that is
 *  performed by a component of your workflow. Coordinating tasks in a workflow involves managing intertask dependencies,
 *  scheduling, and concurrency in accordance with the logical flow of the
 * 
 *  application>
 * 
 *  Amazon SWF gives you full control over implementing tasks and coordinating them without worrying about underlying
 *  complexities such as tracking their progress and maintaining their
 * 
 *  state>
 * 
 *  This documentation serves as reference only. For a broader overview of the Amazon SWF programming model, see the <i> <a
 *  href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/">Amazon SWF Developer Guide</a>
 *
 * \sa SwfClient::listActivityTypes
 */

/*!
 * Constructs a ListActivityTypesResponse object for \a reply to \a request, with parent \a parent.
 */
ListActivityTypesResponse::ListActivityTypesResponse(
        const ListActivityTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SwfResponse(new ListActivityTypesResponsePrivate(this), parent)
{
    setRequest(new ListActivityTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListActivityTypesRequest * ListActivityTypesResponse::request() const
{
    Q_D(const ListActivityTypesResponse);
    return static_cast<const ListActivityTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Swf ListActivityTypes \a response.
 */
void ListActivityTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListActivityTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Swf::ListActivityTypesResponsePrivate
 * \brief The ListActivityTypesResponsePrivate class provides private implementation for ListActivityTypesResponse.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a ListActivityTypesResponsePrivate object with public implementation \a q.
 */
ListActivityTypesResponsePrivate::ListActivityTypesResponsePrivate(
    ListActivityTypesResponse * const q) : SwfResponsePrivate(q)
{

}

/*!
 * Parses a Swf ListActivityTypes response element from \a xml.
 */
void ListActivityTypesResponsePrivate::parseListActivityTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListActivityTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Swf
} // namespace QtAws
