// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdataqualityjobdefinitionsresponse.h"
#include "listdataqualityjobdefinitionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListDataQualityJobDefinitionsResponse
 * \brief The ListDataQualityJobDefinitionsResponse class provides an interace for SageMaker ListDataQualityJobDefinitions responses.
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
 * \sa SageMakerClient::listDataQualityJobDefinitions
 */

/*!
 * Constructs a ListDataQualityJobDefinitionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDataQualityJobDefinitionsResponse::ListDataQualityJobDefinitionsResponse(
        const ListDataQualityJobDefinitionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListDataQualityJobDefinitionsResponsePrivate(this), parent)
{
    setRequest(new ListDataQualityJobDefinitionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDataQualityJobDefinitionsRequest * ListDataQualityJobDefinitionsResponse::request() const
{
    Q_D(const ListDataQualityJobDefinitionsResponse);
    return static_cast<const ListDataQualityJobDefinitionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListDataQualityJobDefinitions \a response.
 */
void ListDataQualityJobDefinitionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDataQualityJobDefinitionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListDataQualityJobDefinitionsResponsePrivate
 * \brief The ListDataQualityJobDefinitionsResponsePrivate class provides private implementation for ListDataQualityJobDefinitionsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListDataQualityJobDefinitionsResponsePrivate object with public implementation \a q.
 */
ListDataQualityJobDefinitionsResponsePrivate::ListDataQualityJobDefinitionsResponsePrivate(
    ListDataQualityJobDefinitionsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListDataQualityJobDefinitions response element from \a xml.
 */
void ListDataQualityJobDefinitionsResponsePrivate::parseListDataQualityJobDefinitionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDataQualityJobDefinitionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
