// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEVENTSOURCESCONFIGREQUEST_H
#define QTAWS_UPDATEEVENTSOURCESCONFIGREQUEST_H

#include "devopsgururequest.h"

namespace QtAws {
namespace DevOpsGuru {

class UpdateEventSourcesConfigRequestPrivate;

class QTAWSDEVOPSGURU_EXPORT UpdateEventSourcesConfigRequest : public DevOpsGuruRequest {

public:
    UpdateEventSourcesConfigRequest(const UpdateEventSourcesConfigRequest &other);
    UpdateEventSourcesConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEventSourcesConfigRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
