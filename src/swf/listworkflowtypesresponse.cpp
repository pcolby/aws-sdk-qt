// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listworkflowtypesresponse.h"
#include "listworkflowtypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::ListWorkflowTypesResponse
 * \brief The ListWorkflowTypesResponse class provides an interace for Swf ListWorkflowTypes responses.
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
 * \sa SwfClient::listWorkflowTypes
 */

/*!
 * Constructs a ListWorkflowTypesResponse object for \a reply to \a request, with parent \a parent.
 */
ListWorkflowTypesResponse::ListWorkflowTypesResponse(
        const ListWorkflowTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SwfResponse(new ListWorkflowTypesResponsePrivate(this), parent)
{
    setRequest(new ListWorkflowTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWorkflowTypesRequest * ListWorkflowTypesResponse::request() const
{
    Q_D(const ListWorkflowTypesResponse);
    return static_cast<const ListWorkflowTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Swf ListWorkflowTypes \a response.
 */
void ListWorkflowTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListWorkflowTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Swf::ListWorkflowTypesResponsePrivate
 * \brief The ListWorkflowTypesResponsePrivate class provides private implementation for ListWorkflowTypesResponse.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a ListWorkflowTypesResponsePrivate object with public implementation \a q.
 */
ListWorkflowTypesResponsePrivate::ListWorkflowTypesResponsePrivate(
    ListWorkflowTypesResponse * const q) : SwfResponsePrivate(q)
{

}

/*!
 * Parses a Swf ListWorkflowTypes response element from \a xml.
 */
void ListWorkflowTypesResponsePrivate::parseListWorkflowTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWorkflowTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Swf
} // namespace QtAws
