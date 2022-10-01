// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELEXICONREQUEST_H
#define QTAWS_DELETELEXICONREQUEST_H

#include "pollyrequest.h"

namespace QtAws {
namespace Polly {

class DeleteLexiconRequestPrivate;

class QTAWSPOLLY_EXPORT DeleteLexiconRequest : public PollyRequest {

public:
    DeleteLexiconRequest(const DeleteLexiconRequest &other);
    DeleteLexiconRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLexiconRequest)

};

} // namespace Polly
} // namespace QtAws

#endif
