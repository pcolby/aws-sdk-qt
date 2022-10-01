// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALEXAFORBUSINESSRESPONSE_H
#define QTAWS_ALEXAFORBUSINESSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsalexaforbusinessglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace AlexaForBusiness {

class AlexaForBusinessResponsePrivate;

class QTAWSALEXAFORBUSINESS_EXPORT AlexaForBusinessResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    AlexaForBusinessResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    AlexaForBusinessResponse(AlexaForBusinessResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AlexaForBusinessResponse)
    Q_DISABLE_COPY(AlexaForBusinessResponse)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
