// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIMAGERECIPEPOLICYRESPONSE_H
#define QTAWS_GETIMAGERECIPEPOLICYRESPONSE_H

#include "imagebuilderresponse.h"
#include "getimagerecipepolicyrequest.h"

namespace QtAws {
namespace ImageBuilder {

class GetImageRecipePolicyResponsePrivate;

class QTAWSIMAGEBUILDER_EXPORT GetImageRecipePolicyResponse : public ImageBuilderResponse {
    Q_OBJECT

public:
    GetImageRecipePolicyResponse(const GetImageRecipePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetImageRecipePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetImageRecipePolicyResponse)
    Q_DISABLE_COPY(GetImageRecipePolicyResponse)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
