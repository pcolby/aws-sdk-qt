// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENOTEBOOKINSTANCERESPONSE_H
#define QTAWS_DESCRIBENOTEBOOKINSTANCERESPONSE_H

#include "sagemakerresponse.h"
#include "describenotebookinstancerequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeNotebookInstanceResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribeNotebookInstanceResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribeNotebookInstanceResponse(const DescribeNotebookInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeNotebookInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNotebookInstanceResponse)
    Q_DISABLE_COPY(DescribeNotebookInstanceResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
