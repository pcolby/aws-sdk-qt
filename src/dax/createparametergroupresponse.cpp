// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createparametergroupresponse.h"
#include "createparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Dax {

/*!
 * \class QtAws::Dax::CreateParameterGroupResponse
 * \brief The CreateParameterGroupResponse class provides an interace for Dax CreateParameterGroup responses.
 *
 * \inmodule QtAwsDax
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::createParameterGroup
 */

/*!
 * Constructs a CreateParameterGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateParameterGroupResponse::CreateParameterGroupResponse(
        const CreateParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DaxResponse(new CreateParameterGroupResponsePrivate(this), parent)
{
    setRequest(new CreateParameterGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateParameterGroupRequest * CreateParameterGroupResponse::request() const
{
    Q_D(const CreateParameterGroupResponse);
    return static_cast<const CreateParameterGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Dax CreateParameterGroup \a response.
 */
void CreateParameterGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateParameterGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Dax::CreateParameterGroupResponsePrivate
 * \brief The CreateParameterGroupResponsePrivate class provides private implementation for CreateParameterGroupResponse.
 * \internal
 *
 * \inmodule QtAwsDax
 */

/*!
 * Constructs a CreateParameterGroupResponsePrivate object with public implementation \a q.
 */
CreateParameterGroupResponsePrivate::CreateParameterGroupResponsePrivate(
    CreateParameterGroupResponse * const q) : DaxResponsePrivate(q)
{

}

/*!
 * Parses a Dax CreateParameterGroup response element from \a xml.
 */
void CreateParameterGroupResponsePrivate::parseCreateParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateParameterGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Dax
} // namespace QtAws
