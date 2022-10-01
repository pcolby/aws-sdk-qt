// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTREAMINGIMAGESREQUEST_H
#define QTAWS_LISTSTREAMINGIMAGESREQUEST_H

#include "nimblerequest.h"

namespace QtAws {
namespace Nimble {

class ListStreamingImagesRequestPrivate;

class QTAWSNIMBLE_EXPORT ListStreamingImagesRequest : public NimbleRequest {

public:
    ListStreamingImagesRequest(const ListStreamingImagesRequest &other);
    ListStreamingImagesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStreamingImagesRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
