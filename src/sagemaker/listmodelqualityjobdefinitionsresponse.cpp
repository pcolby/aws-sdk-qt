// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmodelqualityjobdefinitionsresponse.h"
#include "listmodelqualityjobdefinitionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListModelQualityJobDefinitionsResponse
 * \brief The ListModelQualityJobDefinitionsResponse class provides an interace for SageMaker ListModelQualityJobDefinitions responses.
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
 * \sa SageMakerClient::listModelQualityJobDefinitions
 */

/*!
 * Constructs a ListModelQualityJobDefinitionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListModelQualityJobDefinitionsResponse::ListModelQualityJobDefinitionsResponse(
        const ListModelQualityJobDefinitionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListModelQualityJobDefinitionsResponsePrivate(this), parent)
{
    setRequest(new ListModelQualityJobDefinitionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListModelQualityJobDefinitionsRequest * ListModelQualityJobDefinitionsResponse::request() const
{
    Q_D(const ListModelQualityJobDefinitionsResponse);
    return static_cast<const ListModelQualityJobDefinitionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListModelQualityJobDefinitions \a response.
 */
void ListModelQualityJobDefinitionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListModelQualityJobDefinitionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListModelQualityJobDefinitionsResponsePrivate
 * \brief The ListModelQualityJobDefinitionsResponsePrivate class provides private implementation for ListModelQualityJobDefinitionsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListModelQualityJobDefinitionsResponsePrivate object with public implementation \a q.
 */
ListModelQualityJobDefinitionsResponsePrivate::ListModelQualityJobDefinitionsResponsePrivate(
    ListModelQualityJobDefinitionsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListModelQualityJobDefinitions response element from \a xml.
 */
void ListModelQualityJobDefinitionsResponsePrivate::parseListModelQualityJobDefinitionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListModelQualityJobDefinitionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
