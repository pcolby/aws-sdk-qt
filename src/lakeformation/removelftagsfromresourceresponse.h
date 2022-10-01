// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVELFTAGSFROMRESOURCERESPONSE_H
#define QTAWS_REMOVELFTAGSFROMRESOURCERESPONSE_H

#include "lakeformationresponse.h"
#include "removelftagsfromresourcerequest.h"

namespace QtAws {
namespace LakeFormation {

class RemoveLFTagsFromResourceResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT RemoveLFTagsFromResourceResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    RemoveLFTagsFromResourceResponse(const RemoveLFTagsFromResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveLFTagsFromResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveLFTagsFromResourceResponse)
    Q_DISABLE_COPY(RemoveLFTagsFromResourceResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
