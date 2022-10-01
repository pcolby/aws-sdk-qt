// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELEXICONRESPONSE_H
#define QTAWS_DELETELEXICONRESPONSE_H

#include "pollyresponse.h"
#include "deletelexiconrequest.h"

namespace QtAws {
namespace Polly {

class DeleteLexiconResponsePrivate;

class QTAWSPOLLY_EXPORT DeleteLexiconResponse : public PollyResponse {
    Q_OBJECT

public:
    DeleteLexiconResponse(const DeleteLexiconRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteLexiconRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLexiconResponse)
    Q_DISABLE_COPY(DeleteLexiconResponse)

};

} // namespace Polly
} // namespace QtAws

#endif
