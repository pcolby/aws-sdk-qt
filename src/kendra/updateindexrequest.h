// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINDEXREQUEST_H
#define QTAWS_UPDATEINDEXREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class UpdateIndexRequestPrivate;

class QTAWSKENDRA_EXPORT UpdateIndexRequest : public KendraRequest {

public:
    UpdateIndexRequest(const UpdateIndexRequest &other);
    UpdateIndexRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateIndexRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
