// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTJOBRUNREQUEST_H
#define QTAWS_STARTJOBRUNREQUEST_H

#include "databrewrequest.h"

namespace QtAws {
namespace DataBrew {

class StartJobRunRequestPrivate;

class QTAWSDATABREW_EXPORT StartJobRunRequest : public DataBrewRequest {

public:
    StartJobRunRequest(const StartJobRunRequest &other);
    StartJobRunRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartJobRunRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
