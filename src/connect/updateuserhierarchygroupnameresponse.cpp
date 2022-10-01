// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateuserhierarchygroupnameresponse.h"
#include "updateuserhierarchygroupnameresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::UpdateUserHierarchyGroupNameResponse
 * \brief The UpdateUserHierarchyGroupNameResponse class provides an interace for Connect UpdateUserHierarchyGroupName responses.
 *
 * \inmodule QtAwsConnect
 *
 *  Amazon Connect is a cloud-based contact center solution that you use to set up and manage a customer contact center and
 *  provide reliable customer engagement at any
 * 
 *  scale>
 * 
 *  Amazon Connect provides metrics and real-time reporting that enable you to optimize contact routing. You can also
 *  resolve customer issues more efficiently by getting customers in touch with the appropriate
 * 
 *  agents>
 * 
 *  There are limits to the number of Amazon Connect resources that you can create. There are also limits to the number of
 *  requests that you can make per second. For more information, see <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">Amazon Connect Service
 *  Quotas</a> in the <i>Amazon Connect Administrator
 * 
 *  Guide</i>>
 * 
 *  You can connect programmatically to an Amazon Web Services service by using an endpoint. For a list of Amazon Connect
 *  endpoints, see <a href="https://docs.aws.amazon.com/general/latest/gr/connect_region.html">Amazon Connect
 * 
 *  Endpoints</a>> <note>
 * 
 *  Working with flows? Check out the <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon Connect Flow
 *
 * \sa ConnectClient::updateUserHierarchyGroupName
 */

/*!
 * Constructs a UpdateUserHierarchyGroupNameResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateUserHierarchyGroupNameResponse::UpdateUserHierarchyGroupNameResponse(
        const UpdateUserHierarchyGroupNameRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectResponse(new UpdateUserHierarchyGroupNameResponsePrivate(this), parent)
{
    setRequest(new UpdateUserHierarchyGroupNameRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateUserHierarchyGroupNameRequest * UpdateUserHierarchyGroupNameResponse::request() const
{
    Q_D(const UpdateUserHierarchyGroupNameResponse);
    return static_cast<const UpdateUserHierarchyGroupNameRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Connect UpdateUserHierarchyGroupName \a response.
 */
void UpdateUserHierarchyGroupNameResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateUserHierarchyGroupNameResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Connect::UpdateUserHierarchyGroupNameResponsePrivate
 * \brief The UpdateUserHierarchyGroupNameResponsePrivate class provides private implementation for UpdateUserHierarchyGroupNameResponse.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a UpdateUserHierarchyGroupNameResponsePrivate object with public implementation \a q.
 */
UpdateUserHierarchyGroupNameResponsePrivate::UpdateUserHierarchyGroupNameResponsePrivate(
    UpdateUserHierarchyGroupNameResponse * const q) : ConnectResponsePrivate(q)
{

}

/*!
 * Parses a Connect UpdateUserHierarchyGroupName response element from \a xml.
 */
void UpdateUserHierarchyGroupNameResponsePrivate::parseUpdateUserHierarchyGroupNameResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateUserHierarchyGroupNameResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Connect
} // namespace QtAws
