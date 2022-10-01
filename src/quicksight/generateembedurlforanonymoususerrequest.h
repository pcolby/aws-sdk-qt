// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEEMBEDURLFORANONYMOUSUSERREQUEST_H
#define QTAWS_GENERATEEMBEDURLFORANONYMOUSUSERREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class GenerateEmbedUrlForAnonymousUserRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT GenerateEmbedUrlForAnonymousUserRequest : public QuickSightRequest {

public:
    GenerateEmbedUrlForAnonymousUserRequest(const GenerateEmbedUrlForAnonymousUserRequest &other);
    GenerateEmbedUrlForAnonymousUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GenerateEmbedUrlForAnonymousUserRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
