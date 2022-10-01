// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTIMAGERECIPEPOLICYRESPONSE_H
#define QTAWS_PUTIMAGERECIPEPOLICYRESPONSE_H

#include "imagebuilderresponse.h"
#include "putimagerecipepolicyrequest.h"

namespace QtAws {
namespace ImageBuilder {

class PutImageRecipePolicyResponsePrivate;

class QTAWSIMAGEBUILDER_EXPORT PutImageRecipePolicyResponse : public ImageBuilderResponse {
    Q_OBJECT

public:
    PutImageRecipePolicyResponse(const PutImageRecipePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutImageRecipePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutImageRecipePolicyResponse)
    Q_DISABLE_COPY(PutImageRecipePolicyResponse)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
