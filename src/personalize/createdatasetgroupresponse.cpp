// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdatasetgroupresponse.h"
#include "createdatasetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::CreateDatasetGroupResponse
 * \brief The CreateDatasetGroupResponse class provides an interace for Personalize CreateDatasetGroup responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::createDatasetGroup
 */

/*!
 * Constructs a CreateDatasetGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDatasetGroupResponse::CreateDatasetGroupResponse(
        const CreateDatasetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new CreateDatasetGroupResponsePrivate(this), parent)
{
    setRequest(new CreateDatasetGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDatasetGroupRequest * CreateDatasetGroupResponse::request() const
{
    Q_D(const CreateDatasetGroupResponse);
    return static_cast<const CreateDatasetGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize CreateDatasetGroup \a response.
 */
void CreateDatasetGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDatasetGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::CreateDatasetGroupResponsePrivate
 * \brief The CreateDatasetGroupResponsePrivate class provides private implementation for CreateDatasetGroupResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a CreateDatasetGroupResponsePrivate object with public implementation \a q.
 */
CreateDatasetGroupResponsePrivate::CreateDatasetGroupResponsePrivate(
    CreateDatasetGroupResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize CreateDatasetGroup response element from \a xml.
 */
void CreateDatasetGroupResponsePrivate::parseCreateDatasetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDatasetGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
