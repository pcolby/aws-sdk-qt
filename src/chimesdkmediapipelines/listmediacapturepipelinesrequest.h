// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMEDIACAPTUREPIPELINESREQUEST_H
#define QTAWS_LISTMEDIACAPTUREPIPELINESREQUEST_H

#include "chimesdkmediapipelinesrequest.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

class ListMediaCapturePipelinesRequestPrivate;

class QTAWSCHIMESDKMEDIAPIPELINES_EXPORT ListMediaCapturePipelinesRequest : public ChimeSdkMediaPipelinesRequest {

public:
    ListMediaCapturePipelinesRequest(const ListMediaCapturePipelinesRequest &other);
    ListMediaCapturePipelinesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMediaCapturePipelinesRequest)

};

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws

#endif
