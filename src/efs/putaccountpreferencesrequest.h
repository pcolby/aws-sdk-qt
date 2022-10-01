// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCOUNTPREFERENCESREQUEST_H
#define QTAWS_PUTACCOUNTPREFERENCESREQUEST_H

#include "efsrequest.h"

namespace QtAws {
namespace Efs {

class PutAccountPreferencesRequestPrivate;

class QTAWSEFS_EXPORT PutAccountPreferencesRequest : public EfsRequest {

public:
    PutAccountPreferencesRequest(const PutAccountPreferencesRequest &other);
    PutAccountPreferencesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAccountPreferencesRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
