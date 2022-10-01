/*
    Copyright 2013-2021 Paul Colby

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

#include "listtrialcomponentsresponse.h"
#include "listtrialcomponentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListTrialComponentsResponse
 * \brief The ListTrialComponentsResponse class provides an interace for SageMaker ListTrialComponents responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::listTrialComponents
 */

/*!
 * Constructs a ListTrialComponentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListTrialComponentsResponse::ListTrialComponentsResponse(
        const ListTrialComponentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListTrialComponentsResponsePrivate(this), parent)
{
    setRequest(new ListTrialComponentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTrialComponentsRequest * ListTrialComponentsResponse::request() const
{
    Q_D(const ListTrialComponentsResponse);
    return static_cast<const ListTrialComponentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListTrialComponents \a response.
 */
void ListTrialComponentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTrialComponentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListTrialComponentsResponsePrivate
 * \brief The ListTrialComponentsResponsePrivate class provides private implementation for ListTrialComponentsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListTrialComponentsResponsePrivate object with public implementation \a q.
 */
ListTrialComponentsResponsePrivate::ListTrialComponentsResponsePrivate(
    ListTrialComponentsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListTrialComponents response element from \a xml.
 */
void ListTrialComponentsResponsePrivate::parseListTrialComponentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTrialComponentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
