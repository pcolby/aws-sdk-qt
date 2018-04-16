/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listtrainingjobsresponse.h"
#include "listtrainingjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListTrainingJobsResponse
 *
 * \brief The ListTrainingJobsResponse class encapsulates SageMaker ListTrainingJobs responses.
 *
 * \ingroup SageMaker
 *
 *
 * \sa SageMakerClient::listTrainingJobs
 */

/*!
 * @brief  Constructs a new ListTrainingJobsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTrainingJobsResponse::ListTrainingJobsResponse(
        const ListTrainingJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListTrainingJobsResponsePrivate(this), parent)
{
    setRequest(new ListTrainingJobsRequest(request));
    setReply(reply);
}

const ListTrainingJobsRequest * ListTrainingJobsResponse::request() const
{
    Q_D(const ListTrainingJobsResponse);
    return static_cast<const ListTrainingJobsRequest *>(d->request);
}

/*!
 * @brief  Parse a SageMaker ListTrainingJobs response.
 *
 * @param  response  Response to parse.
 */
void ListTrainingJobsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListTrainingJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListTrainingJobsResponsePrivate
 *
 * \brief Private implementation for ListTrainingJobsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListTrainingJobsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListTrainingJobsResponse instance.
 */
ListTrainingJobsResponsePrivate::ListTrainingJobsResponsePrivate(
    ListTrainingJobsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * @brief  Parse an SageMaker ListTrainingJobsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListTrainingJobsResponsePrivate::parseListTrainingJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTrainingJobsResponse"));
    /// @todo
}

} // namespace SageMaker
} // namespace QtAws
