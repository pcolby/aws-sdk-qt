// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMEDIAPIPELINESREQUEST_H
#define QTAWS_LISTMEDIAPIPELINESREQUEST_H

#include "chimesdkmediapipelinesrequest.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

class ListMediaPipelinesRequestPrivate;

class QTAWSCHIMESDKMEDIAPIPELINES_EXPORT ListMediaPipelinesRequest : public ChimeSdkMediaPipelinesRequest {

public:
    ListMediaPipelinesRequest(const ListMediaPipelinesRequest &other);
    ListMediaPipelinesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMediaPipelinesRequest)

};

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws

#endif
