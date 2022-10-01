// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETAGSREQUEST_H
#define QTAWS_CREATETAGSREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class CreateTagsRequestPrivate;

class QTAWSMEDIALIVE_EXPORT CreateTagsRequest : public MediaLiveRequest {

public:
    CreateTagsRequest(const CreateTagsRequest &other);
    CreateTagsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTagsRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
