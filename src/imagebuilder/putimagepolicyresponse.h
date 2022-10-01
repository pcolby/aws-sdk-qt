// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTIMAGEPOLICYRESPONSE_H
#define QTAWS_PUTIMAGEPOLICYRESPONSE_H

#include "imagebuilderresponse.h"
#include "putimagepolicyrequest.h"

namespace QtAws {
namespace ImageBuilder {

class PutImagePolicyResponsePrivate;

class QTAWSIMAGEBUILDER_EXPORT PutImagePolicyResponse : public ImageBuilderResponse {
    Q_OBJECT

public:
    PutImagePolicyResponse(const PutImagePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutImagePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutImagePolicyResponse)
    Q_DISABLE_COPY(PutImagePolicyResponse)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
