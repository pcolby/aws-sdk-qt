// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PERSONALIZEEVENTSRESPONSE_H
#define QTAWS_PERSONALIZEEVENTSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawspersonalizeeventsglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace PersonalizeEvents {

class PersonalizeEventsResponsePrivate;

class QTAWSPERSONALIZEEVENTS_EXPORT PersonalizeEventsResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    PersonalizeEventsResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    PersonalizeEventsResponse(PersonalizeEventsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PersonalizeEventsResponse)
    Q_DISABLE_COPY(PersonalizeEventsResponse)

};

} // namespace PersonalizeEvents
} // namespace QtAws

#endif
