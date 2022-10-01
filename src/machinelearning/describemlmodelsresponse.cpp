// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describemlmodelsresponse.h"
#include "describemlmodelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/*!
 * \class QtAws::MachineLearning::DescribeMLModelsResponse
 * \brief The DescribeMLModelsResponse class provides an interace for MachineLearning DescribeMLModels responses.
 *
 * \inmodule QtAwsMachineLearning
 *
 *
 * \sa MachineLearningClient::describeMLModels
 */

/*!
 * Constructs a DescribeMLModelsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeMLModelsResponse::DescribeMLModelsResponse(
        const DescribeMLModelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new DescribeMLModelsResponsePrivate(this), parent)
{
    setRequest(new DescribeMLModelsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeMLModelsRequest * DescribeMLModelsResponse::request() const
{
    Q_D(const DescribeMLModelsResponse);
    return static_cast<const DescribeMLModelsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MachineLearning DescribeMLModels \a response.
 */
void DescribeMLModelsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeMLModelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MachineLearning::DescribeMLModelsResponsePrivate
 * \brief The DescribeMLModelsResponsePrivate class provides private implementation for DescribeMLModelsResponse.
 * \internal
 *
 * \inmodule QtAwsMachineLearning
 */

/*!
 * Constructs a DescribeMLModelsResponsePrivate object with public implementation \a q.
 */
DescribeMLModelsResponsePrivate::DescribeMLModelsResponsePrivate(
    DescribeMLModelsResponse * const q) : MachineLearningResponsePrivate(q)
{

}

/*!
 * Parses a MachineLearning DescribeMLModels response element from \a xml.
 */
void DescribeMLModelsResponsePrivate::parseDescribeMLModelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeMLModelsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MachineLearning
} // namespace QtAws
