// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLEXICONREQUEST_H
#define QTAWS_GETLEXICONREQUEST_H

#include "pollyrequest.h"

namespace QtAws {
namespace Polly {

class GetLexiconRequestPrivate;

class QTAWSPOLLY_EXPORT GetLexiconRequest : public PollyRequest {

public:
    GetLexiconRequest(const GetLexiconRequest &other);
    GetLexiconRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLexiconRequest)

};

} // namespace Polly
} // namespace QtAws

#endif
