// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFEATUREGROUPSRESPONSE_H
#define QTAWS_LISTFEATUREGROUPSRESPONSE_H

#include "sagemakerresponse.h"
#include "listfeaturegroupsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListFeatureGroupsResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListFeatureGroupsResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListFeatureGroupsResponse(const ListFeatureGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListFeatureGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFeatureGroupsResponse)
    Q_DISABLE_COPY(ListFeatureGroupsResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
