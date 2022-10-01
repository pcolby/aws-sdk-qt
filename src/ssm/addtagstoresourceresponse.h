// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDTAGSTORESOURCERESPONSE_H
#define QTAWS_ADDTAGSTORESOURCERESPONSE_H

#include "ssmresponse.h"
#include "addtagstoresourcerequest.h"

namespace QtAws {
namespace Ssm {

class AddTagsToResourceResponsePrivate;

class QTAWSSSM_EXPORT AddTagsToResourceResponse : public SsmResponse {
    Q_OBJECT

public:
    AddTagsToResourceResponse(const AddTagsToResourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddTagsToResourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddTagsToResourceResponse)
    Q_DISABLE_COPY(AddTagsToResourceResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
