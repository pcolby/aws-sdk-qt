// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINDEXREQUEST_H
#define QTAWS_CREATEINDEXREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class CreateIndexRequestPrivate;

class QTAWSKENDRA_EXPORT CreateIndexRequest : public KendraRequest {

public:
    CreateIndexRequest(const CreateIndexRequest &other);
    CreateIndexRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateIndexRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
