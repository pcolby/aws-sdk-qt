// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEHITTYPEOFHITRESPONSE_H
#define QTAWS_UPDATEHITTYPEOFHITRESPONSE_H

#include "mturkresponse.h"
#include "updatehittypeofhitrequest.h"

namespace QtAws {
namespace MTurk {

class UpdateHITTypeOfHITResponsePrivate;

class QTAWSMTURK_EXPORT UpdateHITTypeOfHITResponse : public MTurkResponse {
    Q_OBJECT

public:
    UpdateHITTypeOfHITResponse(const UpdateHITTypeOfHITRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateHITTypeOfHITRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateHITTypeOfHITResponse)
    Q_DISABLE_COPY(UpdateHITTypeOfHITResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif
