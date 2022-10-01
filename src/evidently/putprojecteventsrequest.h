// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPROJECTEVENTSREQUEST_H
#define QTAWS_PUTPROJECTEVENTSREQUEST_H

#include "evidentlyrequest.h"

namespace QtAws {
namespace Evidently {

class PutProjectEventsRequestPrivate;

class QTAWSEVIDENTLY_EXPORT PutProjectEventsRequest : public EvidentlyRequest {

public:
    PutProjectEventsRequest(const PutProjectEventsRequest &other);
    PutProjectEventsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutProjectEventsRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
