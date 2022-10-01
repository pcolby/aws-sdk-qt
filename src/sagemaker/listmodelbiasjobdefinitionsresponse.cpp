// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmodelbiasjobdefinitionsresponse.h"
#include "listmodelbiasjobdefinitionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListModelBiasJobDefinitionsResponse
 * \brief The ListModelBiasJobDefinitionsResponse class provides an interace for SageMaker ListModelBiasJobDefinitions responses.
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
 * \sa SageMakerClient::listModelBiasJobDefinitions
 */

/*!
 * Constructs a ListModelBiasJobDefinitionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListModelBiasJobDefinitionsResponse::ListModelBiasJobDefinitionsResponse(
        const ListModelBiasJobDefinitionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListModelBiasJobDefinitionsResponsePrivate(this), parent)
{
    setRequest(new ListModelBiasJobDefinitionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListModelBiasJobDefinitionsRequest * ListModelBiasJobDefinitionsResponse::request() const
{
    Q_D(const ListModelBiasJobDefinitionsResponse);
    return static_cast<const ListModelBiasJobDefinitionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListModelBiasJobDefinitions \a response.
 */
void ListModelBiasJobDefinitionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListModelBiasJobDefinitionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListModelBiasJobDefinitionsResponsePrivate
 * \brief The ListModelBiasJobDefinitionsResponsePrivate class provides private implementation for ListModelBiasJobDefinitionsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListModelBiasJobDefinitionsResponsePrivate object with public implementation \a q.
 */
ListModelBiasJobDefinitionsResponsePrivate::ListModelBiasJobDefinitionsResponsePrivate(
    ListModelBiasJobDefinitionsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListModelBiasJobDefinitions response element from \a xml.
 */
void ListModelBiasJobDefinitionsResponsePrivate::parseListModelBiasJobDefinitionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListModelBiasJobDefinitionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
