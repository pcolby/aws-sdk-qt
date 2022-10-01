// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESOLUTIONVERSIONRESPONSE_H
#define QTAWS_CREATESOLUTIONVERSIONRESPONSE_H

#include "personalizeresponse.h"
#include "createsolutionversionrequest.h"

namespace QtAws {
namespace Personalize {

class CreateSolutionVersionResponsePrivate;

class QTAWSPERSONALIZE_EXPORT CreateSolutionVersionResponse : public PersonalizeResponse {
    Q_OBJECT

public:
    CreateSolutionVersionResponse(const CreateSolutionVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSolutionVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSolutionVersionResponse)
    Q_DISABLE_COPY(CreateSolutionVersionResponse)

};

} // namespace Personalize
} // namespace QtAws

#endif
