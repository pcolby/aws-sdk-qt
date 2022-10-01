// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDLFTAGSTORESOURCERESPONSE_H
#define QTAWS_ADDLFTAGSTORESOURCERESPONSE_H

#include "lakeformationresponse.h"
#include "addlftagstoresourcerequest.h"

namespace QtAws {
namespace LakeFormation {

class AddLFTagsToResourceResponsePrivate;

class QTAWSLAKEFORMATION_EXPORT AddLFTagsToResourceResponse : public LakeFormationResponse {
    Q_OBJECT

public:
    AddLFTagsToResourceResponse(const AddLFTagsToResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddLFTagsToResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddLFTagsToResourceResponse)
    Q_DISABLE_COPY(AddLFTagsToResourceResponse)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
