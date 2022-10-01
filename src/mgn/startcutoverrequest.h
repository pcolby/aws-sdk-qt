// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCUTOVERREQUEST_H
#define QTAWS_STARTCUTOVERREQUEST_H

#include "mgnrequest.h"

namespace QtAws {
namespace Mgn {

class StartCutoverRequestPrivate;

class QTAWSMGN_EXPORT StartCutoverRequest : public MgnRequest {

public:
    StartCutoverRequest(const StartCutoverRequest &other);
    StartCutoverRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartCutoverRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
