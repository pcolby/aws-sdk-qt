// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listexperimentsresponse.h"
#include "listexperimentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListExperimentsResponse
 * \brief The ListExperimentsResponse class provides an interace for SageMaker ListExperiments responses.
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
 * \sa SageMakerClient::listExperiments
 */

/*!
 * Constructs a ListExperimentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListExperimentsResponse::ListExperimentsResponse(
        const ListExperimentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListExperimentsResponsePrivate(this), parent)
{
    setRequest(new ListExperimentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListExperimentsRequest * ListExperimentsResponse::request() const
{
    Q_D(const ListExperimentsResponse);
    return static_cast<const ListExperimentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListExperiments \a response.
 */
void ListExperimentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListExperimentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListExperimentsResponsePrivate
 * \brief The ListExperimentsResponsePrivate class provides private implementation for ListExperimentsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListExperimentsResponsePrivate object with public implementation \a q.
 */
ListExperimentsResponsePrivate::ListExperimentsResponsePrivate(
    ListExperimentsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListExperiments response element from \a xml.
 */
void ListExperimentsResponsePrivate::parseListExperimentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListExperimentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
