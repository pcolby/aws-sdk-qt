// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createresourcegroupresponse.h"
#include "createresourcegroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::CreateResourceGroupResponse
 * \brief The CreateResourceGroupResponse class provides an interace for Inspector CreateResourceGroup responses.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::createResourceGroup
 */

/*!
 * Constructs a CreateResourceGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateResourceGroupResponse::CreateResourceGroupResponse(
        const CreateResourceGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new CreateResourceGroupResponsePrivate(this), parent)
{
    setRequest(new CreateResourceGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateResourceGroupRequest * CreateResourceGroupResponse::request() const
{
    Q_D(const CreateResourceGroupResponse);
    return static_cast<const CreateResourceGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector CreateResourceGroup \a response.
 */
void CreateResourceGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateResourceGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector::CreateResourceGroupResponsePrivate
 * \brief The CreateResourceGroupResponsePrivate class provides private implementation for CreateResourceGroupResponse.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a CreateResourceGroupResponsePrivate object with public implementation \a q.
 */
CreateResourceGroupResponsePrivate::CreateResourceGroupResponsePrivate(
    CreateResourceGroupResponse * const q) : InspectorResponsePrivate(q)
{

}

/*!
 * Parses a Inspector CreateResourceGroup response element from \a xml.
 */
void CreateResourceGroupResponsePrivate::parseCreateResourceGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateResourceGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector
} // namespace QtAws
