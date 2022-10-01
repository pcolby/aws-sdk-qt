// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIMAGEPOLICYRESPONSE_H
#define QTAWS_GETIMAGEPOLICYRESPONSE_H

#include "imagebuilderresponse.h"
#include "getimagepolicyrequest.h"

namespace QtAws {
namespace ImageBuilder {

class GetImagePolicyResponsePrivate;

class QTAWSIMAGEBUILDER_EXPORT GetImagePolicyResponse : public ImageBuilderResponse {
    Q_OBJECT

public:
    GetImagePolicyResponse(const GetImagePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetImagePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetImagePolicyResponse)
    Q_DISABLE_COPY(GetImagePolicyResponse)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
