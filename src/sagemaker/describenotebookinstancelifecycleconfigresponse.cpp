/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describenotebookinstancelifecycleconfigresponse.h"
#include "describenotebookinstancelifecycleconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeNotebookInstanceLifecycleConfigResponse
 * \brief The DescribeNotebookInstanceLifecycleConfigResponse class provides an interace for SageMaker DescribeNotebookInstanceLifecycleConfig responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *
 * \sa SageMakerClient::describeNotebookInstanceLifecycleConfig
 */

/*!
 * Constructs a DescribeNotebookInstanceLifecycleConfigResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeNotebookInstanceLifecycleConfigResponse::DescribeNotebookInstanceLifecycleConfigResponse(
        const DescribeNotebookInstanceLifecycleConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeNotebookInstanceLifecycleConfigResponsePrivate(this), parent)
{
    setRequest(new DescribeNotebookInstanceLifecycleConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeNotebookInstanceLifecycleConfigRequest * DescribeNotebookInstanceLifecycleConfigResponse::request() const
{
    Q_D(const DescribeNotebookInstanceLifecycleConfigResponse);
    return static_cast<const DescribeNotebookInstanceLifecycleConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeNotebookInstanceLifecycleConfig \a response.
 */
void DescribeNotebookInstanceLifecycleConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeNotebookInstanceLifecycleConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeNotebookInstanceLifecycleConfigResponsePrivate
 * \brief The DescribeNotebookInstanceLifecycleConfigResponsePrivate class provides private implementation for DescribeNotebookInstanceLifecycleConfigResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeNotebookInstanceLifecycleConfigResponsePrivate object with public implementation \a q.
 */
DescribeNotebookInstanceLifecycleConfigResponsePrivate::DescribeNotebookInstanceLifecycleConfigResponsePrivate(
    DescribeNotebookInstanceLifecycleConfigResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeNotebookInstanceLifecycleConfig response element from \a xml.
 */
void DescribeNotebookInstanceLifecycleConfigResponsePrivate::parseDescribeNotebookInstanceLifecycleConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeNotebookInstanceLifecycleConfigResponse"));
    /// @todo
}

} // namespace SageMaker
} // namespace QtAws
