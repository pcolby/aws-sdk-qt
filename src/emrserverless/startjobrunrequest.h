// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTJOBRUNREQUEST_H
#define QTAWS_STARTJOBRUNREQUEST_H

#include "emrserverlessrequest.h"

namespace QtAws {
namespace EmrServerless {

class StartJobRunRequestPrivate;

class QTAWSEMRSERVERLESS_EXPORT StartJobRunRequest : public EmrServerlessRequest {

public:
    StartJobRunRequest(const StartJobRunRequest &other);
    StartJobRunRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartJobRunRequest)

};

} // namespace EmrServerless
} // namespace QtAws

#endif
