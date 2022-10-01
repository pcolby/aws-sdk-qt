// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmodelexplainabilityjobdefinitionsresponse.h"
#include "listmodelexplainabilityjobdefinitionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListModelExplainabilityJobDefinitionsResponse
 * \brief The ListModelExplainabilityJobDefinitionsResponse class provides an interace for SageMaker ListModelExplainabilityJobDefinitions responses.
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
 * \sa SageMakerClient::listModelExplainabilityJobDefinitions
 */

/*!
 * Constructs a ListModelExplainabilityJobDefinitionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListModelExplainabilityJobDefinitionsResponse::ListModelExplainabilityJobDefinitionsResponse(
        const ListModelExplainabilityJobDefinitionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListModelExplainabilityJobDefinitionsResponsePrivate(this), parent)
{
    setRequest(new ListModelExplainabilityJobDefinitionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListModelExplainabilityJobDefinitionsRequest * ListModelExplainabilityJobDefinitionsResponse::request() const
{
    Q_D(const ListModelExplainabilityJobDefinitionsResponse);
    return static_cast<const ListModelExplainabilityJobDefinitionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListModelExplainabilityJobDefinitions \a response.
 */
void ListModelExplainabilityJobDefinitionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListModelExplainabilityJobDefinitionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListModelExplainabilityJobDefinitionsResponsePrivate
 * \brief The ListModelExplainabilityJobDefinitionsResponsePrivate class provides private implementation for ListModelExplainabilityJobDefinitionsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListModelExplainabilityJobDefinitionsResponsePrivate object with public implementation \a q.
 */
ListModelExplainabilityJobDefinitionsResponsePrivate::ListModelExplainabilityJobDefinitionsResponsePrivate(
    ListModelExplainabilityJobDefinitionsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListModelExplainabilityJobDefinitions response element from \a xml.
 */
void ListModelExplainabilityJobDefinitionsResponsePrivate::parseListModelExplainabilityJobDefinitionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListModelExplainabilityJobDefinitionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
