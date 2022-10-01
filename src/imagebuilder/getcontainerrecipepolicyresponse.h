// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTAINERRECIPEPOLICYRESPONSE_H
#define QTAWS_GETCONTAINERRECIPEPOLICYRESPONSE_H

#include "imagebuilderresponse.h"
#include "getcontainerrecipepolicyrequest.h"

namespace QtAws {
namespace ImageBuilder {

class GetContainerRecipePolicyResponsePrivate;

class QTAWSIMAGEBUILDER_EXPORT GetContainerRecipePolicyResponse : public ImageBuilderResponse {
    Q_OBJECT

public:
    GetContainerRecipePolicyResponse(const GetContainerRecipePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetContainerRecipePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContainerRecipePolicyResponse)
    Q_DISABLE_COPY(GetContainerRecipePolicyResponse)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
