// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTPROJECTSESSIONREQUEST_H
#define QTAWS_STARTPROJECTSESSIONREQUEST_H

#include "databrewrequest.h"

namespace QtAws {
namespace DataBrew {

class StartProjectSessionRequestPrivate;

class QTAWSDATABREW_EXPORT StartProjectSessionRequest : public DataBrewRequest {

public:
    StartProjectSessionRequest(const StartProjectSessionRequest &other);
    StartProjectSessionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartProjectSessionRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
