// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPJOBRUNREQUEST_H
#define QTAWS_STOPJOBRUNREQUEST_H

#include "databrewrequest.h"

namespace QtAws {
namespace DataBrew {

class StopJobRunRequestPrivate;

class QTAWSDATABREW_EXPORT StopJobRunRequest : public DataBrewRequest {

public:
    StopJobRunRequest(const StopJobRunRequest &other);
    StopJobRunRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopJobRunRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
