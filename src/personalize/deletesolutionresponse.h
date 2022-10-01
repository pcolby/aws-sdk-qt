// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESOLUTIONRESPONSE_H
#define QTAWS_DELETESOLUTIONRESPONSE_H

#include "personalizeresponse.h"
#include "deletesolutionrequest.h"

namespace QtAws {
namespace Personalize {

class DeleteSolutionResponsePrivate;

class QTAWSPERSONALIZE_EXPORT DeleteSolutionResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    DeleteSolutionResponse(const DeleteSolutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSolutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSolutionResponse)
    Q_DISABLE_COPY(DeleteSolutionResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif
