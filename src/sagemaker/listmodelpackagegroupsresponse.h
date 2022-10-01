// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMODELPACKAGEGROUPSRESPONSE_H
#define QTAWS_LISTMODELPACKAGEGROUPSRESPONSE_H

#include "sagemakerresponse.h"
#include "listmodelpackagegroupsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListModelPackageGroupsResponsePrivate;

class QTAWSSAGEMAKER_EXPORT ListModelPackageGroupsResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListModelPackageGroupsResponse(const ListModelPackageGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListModelPackageGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListModelPackageGroupsResponse)
    Q_DISABLE_COPY(ListModelPackageGroupsResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
