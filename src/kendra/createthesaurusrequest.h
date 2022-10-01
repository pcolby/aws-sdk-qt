// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETHESAURUSREQUEST_H
#define QTAWS_CREATETHESAURUSREQUEST_H

#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class CreateThesaurusRequestPrivate;

class QTAWSKENDRA_EXPORT CreateThesaurusRequest : public KendraRequest {

public:
    CreateThesaurusRequest(const CreateThesaurusRequest &other);
    CreateThesaurusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateThesaurusRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
