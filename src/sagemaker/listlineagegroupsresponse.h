// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLINEAGEGROUPSRESPONSE_H
#define QTAWS_LISTLINEAGEGROUPSRESPONSE_H

#include "sagemakerresponse.h"
#include "listlineagegroupsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListLineageGroupsResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListLineageGroupsResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListLineageGroupsResponse(const ListLineageGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListLineageGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLineageGroupsResponse)
    Q_DISABLE_COPY(ListLineageGroupsResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
