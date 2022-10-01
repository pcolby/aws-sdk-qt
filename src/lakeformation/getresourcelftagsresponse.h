// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCELFTAGSRESPONSE_H
#define QTAWS_GETRESOURCELFTAGSRESPONSE_H

#include "lakeformationresponse.h"
#include "getresourcelftagsrequest.h"

namespace QtAws {
namespace LakeFormation {

class GetResourceLFTagsResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT GetResourceLFTagsResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    GetResourceLFTagsResponse(const GetResourceLFTagsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetResourceLFTagsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResourceLFTagsResponse)
    Q_DISABLE_COPY(GetResourceLFTagsResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
